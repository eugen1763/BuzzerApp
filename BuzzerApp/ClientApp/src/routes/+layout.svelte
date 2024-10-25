<script>
    import '../app.postcss';
    import 'bootstrap-icons/font/bootstrap-icons.min.css'
    import PageTitle from "../components/PageTitle.svelte";
</script>

<svelte:head>
    <title>- BuzzerApp -</title>
</svelte:head>

<div class="bg-gray-900 fixed w-screen h-screen top-0 left-0 dotted overflow-x-hidden overflow-y-auto">
    <div class="w-full flex justify-center my-5">
        <PageTitle/>
    </div>
    <slot/>
</div>

<style>
    .dotted {
        background-image: radial-gradient(circle, #7e22ce56 1px, rgba(0, 0, 0, 0) 1px);
        background-size: 1.5rem 1.5rem;
    }
</style>