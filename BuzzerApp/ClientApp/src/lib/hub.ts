import * as signalR from "@microsoft/signalr";

export async function initHub() {
	console.log("setting up signalR")
	
	const connection = new signalR.HubConnectionBuilder()
		.withUrl("/buzzerhub")
		.build();

	connection.on("test", args => {
		console.log("got message", args);
	});

	try {
		console.log("connecting")
		await connection.start();
		console.log("connected")
	} catch (ex) {
		console.error(ex);
	}
	
	console.log("setup hub", connection)
}