<script>
    import {Card} from "flowbite-svelte";
</script>

<Card class={`!border-primary-600 shadow shadow-primary-600 rounded-xl !bg-[#FFFFFF04] ${$$props.class}`}>
    <slot />
</Card>