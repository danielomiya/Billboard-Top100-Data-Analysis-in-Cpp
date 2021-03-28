clean: ## Clean previous build
	@rm -rf build

build: ## Build artifact
	@mkdir -p build
	@cd build && cmake ..
	@$(MAKE) -C build

test: ## Run unit tests
	@$(MAKE) build
	@$(MAKE) -C build test