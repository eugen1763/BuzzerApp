import { sveltekit } from '@sveltejs/kit/vite';
import { defineConfig } from 'vite';

export default defineConfig({
	plugins: [sveltekit()],
	server: {
		proxy: {
			'/api': 'http://localhost:7100',
			'/auth': 'http://localhost:7100',
			'/buzzerhub': {
				target: 'http://localhost:7100',
				ws: true
			},
		}
	}
});