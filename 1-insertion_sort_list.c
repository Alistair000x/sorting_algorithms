{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":".DS_Store","path":".DS_Store","contentType":"file"},{"name":"0-O","path":"0-O","contentType":"file"},{"name":"0-bubble_sort.c","path":"0-bubble_sort.c","contentType":"file"},{"name":"1-O","path":"1-O","contentType":"file"},{"name":"1-insertion_sort_list.c","path":"1-insertion_sort_list.c","contentType":"file"},{"name":"100-shell_sort.c","path":"100-shell_sort.c","contentType":"file"},{"name":"1000-sort_deck.c","path":"1000-sort_deck.c","contentType":"file"},{"name":"101-O","path":"101-O","contentType":"file"},{"name":"101-cocktail_sort_list.c","path":"101-cocktail_sort_list.c","contentType":"file"},{"name":"102-O","path":"102-O","contentType":"file"},{"name":"102-counting_sort.c","path":"102-counting_sort.c","contentType":"file"},{"name":"103-O","path":"103-O","contentType":"file"},{"name":"103-merge_sort.c","path":"103-merge_sort.c","contentType":"file"},{"name":"104-O","path":"104-O","contentType":"file"},{"name":"104-heap_sort.c","path":"104-heap_sort.c","contentType":"file"},{"name":"105-O","path":"105-O","contentType":"file"},{"name":"105-radix_sort.c","path":"105-radix_sort.c","contentType":"file"},{"name":"106-O","path":"106-O","contentType":"file"},{"name":"106-bitonic_sort.c","path":"106-bitonic_sort.c","contentType":"file"},{"name":"107-O","path":"107-O","contentType":"file"},{"name":"107-quick_sort_hoare.c","path":"107-quick_sort_hoare.c","contentType":"file"},{"name":"2-O","path":"2-O","contentType":"file"},{"name":"2-selection_sort.c","path":"2-selection_sort.c","contentType":"file"},{"name":"3-O","path":"3-O","contentType":"file"},{"name":"3-quick_sort.c","path":"3-quick_sort.c","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"deck","path":"deck","contentType":"file"},{"name":"deck.h","path":"deck.h","contentType":"file"},{"name":"print_array.c","path":"print_array.c","contentType":"file"},{"name":"print_list.c","path":"print_list.c","contentType":"file"},{"name":"sort.h","path":"sort.h","contentType":"file"}],"totalCount":31}},"fileTreeProcessingTime":3.014983,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":672031062,"defaultBranch":"main","name":"sorting_algorithms","ownerLogin":"YoTi1412","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-07-28T18:27:15.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/71252194?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1690568836.3419452","canEdit":false,"refType":"branch","currentOid":"11bb22d46f6a87b1557440a1119a5b8f92243b5e"},"path":"1-insertion_sort_list.c","currentUser":null,"blob":{"rawLines":["#include \"sort.h\"","/**"," * insertion_sort_list - function that sorts a doubly linked list"," * of integers in ascending order using the Insertion sort algorithm"," * @list: Dobule linked list to sort"," */","void insertion_sort_list(listint_t **list)","{","\tlistint_t *node;","","\tif (list == NULL || (*list)->next == NULL)","\t\treturn;","\tnode = (*list)->next;","\twhile (node)","\t{","\t\twhile ((node->prev) && (node->prev->n > node->n))","\t\t{","\t\t\tnode = swap_node(node, list);","\t\t\tprint_list(*list);","\t\t}","\t\tnode = node->next;","\t}","}","/**"," *swap_node - swap a node for his previous one"," *@node: node"," *@list: node list"," *Return: return a pointer to a node which was enter it"," */","listint_t *swap_node(listint_t *node, listint_t **list)","{","\tlistint_t *back = node->prev, *current = node;","\t/*NULL, 19, 48, 9, 71, 13, NULL*/","","\tback->next = current->next;","\tif (current->next)","\t\tcurrent->next->prev = back;","\tcurrent->next = back;","\tcurrent->prev = back->prev;","\tback->prev = current;","\tif (current->prev)","\t\tcurrent->prev->next = current;","\telse","\t\t*list = current;","\treturn (current);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":65,"cssClass":"pl-c"}],[{"start":0,"end":68,"cssClass":"pl-c"}],[{"start":0,"end":36,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":24,"cssClass":"pl-en"},{"start":25,"end":34,"cssClass":"pl-smi"},{"start":35,"end":36,"cssClass":"pl-c1"},{"start":36,"end":37,"cssClass":"pl-c1"},{"start":37,"end":41,"cssClass":"pl-s1"}],[],[{"start":1,"end":10,"cssClass":"pl-smi"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":9,"cssClass":"pl-s1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"},{"start":18,"end":20,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":27,"cssClass":"pl-s1"},{"start":28,"end":30,"cssClass":"pl-c1"},{"start":30,"end":34,"cssClass":"pl-c1"},{"start":35,"end":37,"cssClass":"pl-c1"},{"start":38,"end":42,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[{"start":1,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-c1"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":12,"cssClass":"pl-s1"}],[],[{"start":2,"end":7,"cssClass":"pl-k"},{"start":10,"end":14,"cssClass":"pl-s1"},{"start":14,"end":16,"cssClass":"pl-c1"},{"start":16,"end":20,"cssClass":"pl-c1"},{"start":22,"end":24,"cssClass":"pl-c1"},{"start":26,"end":30,"cssClass":"pl-s1"},{"start":30,"end":32,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-c1"},{"start":36,"end":38,"cssClass":"pl-c1"},{"start":38,"end":39,"cssClass":"pl-c1"},{"start":40,"end":41,"cssClass":"pl-c1"},{"start":42,"end":46,"cssClass":"pl-s1"},{"start":46,"end":48,"cssClass":"pl-c1"},{"start":48,"end":49,"cssClass":"pl-c1"}],[],[{"start":3,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":19,"cssClass":"pl-en"},{"start":20,"end":24,"cssClass":"pl-s1"},{"start":26,"end":30,"cssClass":"pl-s1"}],[{"start":3,"end":13,"cssClass":"pl-en"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":15,"end":19,"cssClass":"pl-s1"}],[],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":15,"end":19,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":46,"cssClass":"pl-c"}],[{"start":0,"end":13,"cssClass":"pl-c"}],[{"start":0,"end":18,"cssClass":"pl-c"}],[{"start":0,"end":55,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":9,"cssClass":"pl-smi"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":11,"end":20,"cssClass":"pl-en"},{"start":21,"end":30,"cssClass":"pl-smi"},{"start":31,"end":32,"cssClass":"pl-c1"},{"start":32,"end":36,"cssClass":"pl-s1"},{"start":38,"end":47,"cssClass":"pl-smi"},{"start":48,"end":49,"cssClass":"pl-c1"},{"start":49,"end":50,"cssClass":"pl-c1"},{"start":50,"end":54,"cssClass":"pl-s1"}],[],[{"start":1,"end":10,"cssClass":"pl-smi"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-c1"},{"start":19,"end":23,"cssClass":"pl-s1"},{"start":23,"end":25,"cssClass":"pl-c1"},{"start":25,"end":29,"cssClass":"pl-c1"},{"start":31,"end":32,"cssClass":"pl-c1"},{"start":32,"end":39,"cssClass":"pl-s1"},{"start":40,"end":41,"cssClass":"pl-c1"},{"start":42,"end":46,"cssClass":"pl-s1"}],[{"start":1,"end":34,"cssClass":"pl-c"}],[],[{"start":1,"end":5,"cssClass":"pl-s1"},{"start":5,"end":7,"cssClass":"pl-c1"},{"start":7,"end":11,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":21,"cssClass":"pl-s1"},{"start":21,"end":23,"cssClass":"pl-c1"},{"start":23,"end":27,"cssClass":"pl-c1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":12,"cssClass":"pl-s1"},{"start":12,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"}],[{"start":2,"end":9,"cssClass":"pl-s1"},{"start":9,"end":11,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":28,"cssClass":"pl-s1"}],[{"start":1,"end":8,"cssClass":"pl-s1"},{"start":8,"end":10,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-c1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-s1"}],[{"start":1,"end":8,"cssClass":"pl-s1"},{"start":8,"end":10,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-c1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-s1"},{"start":21,"end":23,"cssClass":"pl-c1"},{"start":23,"end":27,"cssClass":"pl-c1"}],[{"start":1,"end":5,"cssClass":"pl-s1"},{"start":5,"end":7,"cssClass":"pl-c1"},{"start":7,"end":11,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":21,"cssClass":"pl-s1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":12,"cssClass":"pl-s1"},{"start":12,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"}],[{"start":2,"end":9,"cssClass":"pl-s1"},{"start":9,"end":11,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":17,"end":21,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":31,"cssClass":"pl-s1"}],[{"start":1,"end":5,"cssClass":"pl-k"}],[{"start":2,"end":3,"cssClass":"pl-c1"},{"start":3,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":17,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":16,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/YoTi1412/sorting_algorithms/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/YoTi1412/sorting_algorithms/security/dependabot","repoSecurityAndAnalysisPath":"/YoTi1412/sorting_algorithms/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"1-insertion_sort_list.c","displayUrl":"https://github.com/YoTi1412/sorting_algorithms/blob/main/1-insertion_sort_list.c?raw=true","headerInfo":{"blobSize":"1.01 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"470a4c2","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FYoTi1412%2Fsorting_algorithms%2Fblob%2Fmain%2F1-insertion_sort_list.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"46","truncatedSloc":"44"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/YoTi1412/sorting_algorithms/discussions/new","newIssuePath":"/YoTi1412/sorting_algorithms/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/YoTi1412/sorting_algorithms/blob/main/1-insertion_sort_list.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/YoTi1412/sorting_algorithms/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"YoTi1412","repoName":"sorting_algorithms","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"insertion_sort_list","kind":"function","identStart":203,"identEnd":222,"extentStart":203,"extentEnd":240,"fullyQualifiedName":"insertion_sort_list","identUtf16":{"start":{"lineNumber":6,"utf16Col":5},"end":{"lineNumber":6,"utf16Col":24}},"extentUtf16":{"start":{"lineNumber":6,"utf16Col":5},"end":{"lineNumber":6,"utf16Col":42}}},{"name":"swap_node","kind":"function","identStart":652,"identEnd":661,"extentStart":652,"extentEnd":696,"fullyQualifiedName":"swap_node","identUtf16":{"start":{"lineNumber":29,"utf16Col":11},"end":{"lineNumber":29,"utf16Col":20}},"extentUtf16":{"start":{"lineNumber":29,"utf16Col":11},"end":{"lineNumber":29,"utf16Col":55}}}]}},"copilotInfo":null,"csrf_tokens":{"/YoTi1412/sorting_algorithms/branches":{"post":"4AdcGjTGbR5ITSCPv94Pjmy3KYsHBPkI5TF471nnvB7xgdqhZtuDjEjWG5DxGTqgpCtOzHLrOMhw8N1rIsmK9Q"},"/repos/preferences":{"post":"Eny9ALVN0s7XudyVKAH9EhxNcxLBMLy-mHU9AyGbGPQeYfXp-9_k_SVwyeqJI-BaKY-lfrUXQWs3NezGC1UuvQ"}}},"title":"sorting_algorithms/1-insertion_sort_list.c at main · YoTi1412/sorting_algorithms"}