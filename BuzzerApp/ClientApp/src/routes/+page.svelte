<script lang="ts">
    import { initHub } from '../lib/hub.ts';
    import { onMount } from 'svelte';

    onMount(() => initHub());
</script>

<div class="px-3 flex flex-col gap-6">
    Hello
</div>