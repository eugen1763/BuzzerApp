using BuzzerApp.Hubs;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.SignalR;

namespace BuzzerApp.Controllers;

[ApiController]
[Route("/api/[controller]/[action]")]
public class BuzzerController : ControllerBase
{
    private readonly IHubContext<BuzzerHub> _hubContext;

    public BuzzerController(IHubContext<BuzzerHub> hubContext)
    {
        _hubContext = hubContext;
    }

    public async Task Pressed([FromQuery] string buzzerId)
    {
        await _hubContext.Clients.All.SendAsync("test", buzzerId);
    }
}