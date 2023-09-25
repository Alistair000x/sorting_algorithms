{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":".DS_Store","path":".DS_Store","contentType":"file"},{"name":"0-O","path":"0-O","contentType":"file"},{"name":"0-bubble_sort.c","path":"0-bubble_sort.c","contentType":"file"},{"name":"1-O","path":"1-O","contentType":"file"},{"name":"1-insertion_sort_list.c","path":"1-insertion_sort_list.c","contentType":"file"},{"name":"100-shell_sort.c","path":"100-shell_sort.c","contentType":"file"},{"name":"1000-sort_deck.c","path":"1000-sort_deck.c","contentType":"file"},{"name":"101-O","path":"101-O","contentType":"file"},{"name":"101-cocktail_sort_list.c","path":"101-cocktail_sort_list.c","contentType":"file"},{"name":"102-O","path":"102-O","contentType":"file"},{"name":"102-counting_sort.c","path":"102-counting_sort.c","contentType":"file"},{"name":"103-O","path":"103-O","contentType":"file"},{"name":"103-merge_sort.c","path":"103-merge_sort.c","contentType":"file"},{"name":"104-O","path":"104-O","contentType":"file"},{"name":"104-heap_sort.c","path":"104-heap_sort.c","contentType":"file"},{"name":"105-O","path":"105-O","contentType":"file"},{"name":"105-radix_sort.c","path":"105-radix_sort.c","contentType":"file"},{"name":"106-O","path":"106-O","contentType":"file"},{"name":"106-bitonic_sort.c","path":"106-bitonic_sort.c","contentType":"file"},{"name":"107-O","path":"107-O","contentType":"file"},{"name":"107-quick_sort_hoare.c","path":"107-quick_sort_hoare.c","contentType":"file"},{"name":"2-O","path":"2-O","contentType":"file"},{"name":"2-selection_sort.c","path":"2-selection_sort.c","contentType":"file"},{"name":"3-O","path":"3-O","contentType":"file"},{"name":"3-quick_sort.c","path":"3-quick_sort.c","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"deck","path":"deck","contentType":"file"},{"name":"deck.h","path":"deck.h","contentType":"file"},{"name":"print_array.c","path":"print_array.c","contentType":"file"},{"name":"print_list.c","path":"print_list.c","contentType":"file"},{"name":"sort.h","path":"sort.h","contentType":"file"}],"totalCount":31}},"fileTreeProcessingTime":7.55194,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":672031062,"defaultBranch":"main","name":"sorting_algorithms","ownerLogin":"YoTi1412","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-07-28T18:27:15.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/71252194?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1690568836.3419452","canEdit":false,"refType":"branch","currentOid":"11bb22d46f6a87b1557440a1119a5b8f92243b5e"},"path":"100-shell_sort.c","currentUser":null,"blob":{"rawLines":["#include \"sort.h\"","","/**","*swap - the positions of two elements into an array","*@array: array","*@item1: array element","*@item2: array element","*/","void swap(int *array, int item1, int item2)","{","","\tint tmp;","","\ttmp = array[item1];","\tarray[item1] = array[item2];","\tarray[item2] = tmp;","}","/**"," * shell_sort - function that sorts an array of integers in ascending"," * order using the Shell sort algorithm, using the Knuth sequence"," * @size: size of the array"," * @array: list with numbers"," */","void shell_sort(int *array, size_t size)","{","\tsize_t gap = 1, i, index = 0;","","\tif (array == NULL || size < 2)","\t\treturn;","\twhile (gap < size / 3)","\t\tgap = 3 * gap + 1;","\twhile (gap >= 1)","\t{","\t\tfor (i = gap; i < size; i++)","\t\t\tfor (index = i; index >= gap &&","\t\t\t (array[index] < array[index - gap]); index -= gap)","\t\t\t\tswap(array, index, index - gap);","\t\tprint_array(array, size);","\t\tgap /= 3;","\t}","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":51,"cssClass":"pl-c"}],[{"start":0,"end":14,"cssClass":"pl-c"}],[{"start":0,"end":22,"cssClass":"pl-c"}],[{"start":0,"end":22,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":9,"cssClass":"pl-en"},{"start":10,"end":13,"cssClass":"pl-smi"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":15,"end":20,"cssClass":"pl-s1"},{"start":22,"end":25,"cssClass":"pl-smi"},{"start":26,"end":31,"cssClass":"pl-s1"},{"start":33,"end":36,"cssClass":"pl-smi"},{"start":37,"end":42,"cssClass":"pl-s1"}],[],[],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":8,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":7,"end":12,"cssClass":"pl-s1"},{"start":13,"end":18,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":12,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":16,"end":21,"cssClass":"pl-s1"},{"start":22,"end":27,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":12,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":16,"end":19,"cssClass":"pl-s1"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":69,"cssClass":"pl-c"}],[{"start":0,"end":65,"cssClass":"pl-c"}],[{"start":0,"end":27,"cssClass":"pl-c"}],[{"start":0,"end":28,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":15,"cssClass":"pl-en"},{"start":16,"end":19,"cssClass":"pl-smi"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":21,"end":26,"cssClass":"pl-s1"},{"start":28,"end":34,"cssClass":"pl-smi"},{"start":35,"end":39,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":20,"end":25,"cssClass":"pl-s1"},{"start":26,"end":27,"cssClass":"pl-c1"},{"start":28,"end":29,"cssClass":"pl-c1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"},{"start":19,"end":21,"cssClass":"pl-c1"},{"start":22,"end":26,"cssClass":"pl-s1"},{"start":27,"end":28,"cssClass":"pl-c1"},{"start":29,"end":30,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":21,"end":22,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":15,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":19,"cssClass":"pl-c1"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"}],[],[{"start":2,"end":5,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":14,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":24,"cssClass":"pl-s1"},{"start":26,"end":27,"cssClass":"pl-s1"},{"start":27,"end":29,"cssClass":"pl-c1"}],[{"start":3,"end":6,"cssClass":"pl-k"},{"start":8,"end":13,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":16,"end":17,"cssClass":"pl-s1"},{"start":19,"end":24,"cssClass":"pl-s1"},{"start":28,"end":31,"cssClass":"pl-s1"},{"start":32,"end":34,"cssClass":"pl-c1"}],[{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":16,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":25,"cssClass":"pl-s1"},{"start":26,"end":31,"cssClass":"pl-s1"},{"start":32,"end":33,"cssClass":"pl-c1"},{"start":34,"end":37,"cssClass":"pl-s1"},{"start":41,"end":46,"cssClass":"pl-s1"},{"start":47,"end":49,"cssClass":"pl-c1"},{"start":50,"end":53,"cssClass":"pl-s1"}],[{"start":4,"end":8,"cssClass":"pl-en"},{"start":9,"end":14,"cssClass":"pl-s1"},{"start":16,"end":21,"cssClass":"pl-s1"},{"start":23,"end":28,"cssClass":"pl-s1"},{"start":29,"end":30,"cssClass":"pl-c1"},{"start":31,"end":34,"cssClass":"pl-s1"}],[{"start":2,"end":13,"cssClass":"pl-en"},{"start":14,"end":19,"cssClass":"pl-s1"},{"start":21,"end":25,"cssClass":"pl-s1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"}],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/YoTi1412/sorting_algorithms/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/YoTi1412/sorting_algorithms/security/dependabot","repoSecurityAndAnalysisPath":"/YoTi1412/sorting_algorithms/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"100-shell_sort.c","displayUrl":"https://github.com/YoTi1412/sorting_algorithms/blob/main/100-shell_sort.c?raw=true","headerInfo":{"blobSize":"858 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"05f9db3","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FYoTi1412%2Fsorting_algorithms%2Fblob%2Fmain%2F100-shell_sort.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"41","truncatedSloc":"37"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/YoTi1412/sorting_algorithms/discussions/new","newIssuePath":"/YoTi1412/sorting_algorithms/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/YoTi1412/sorting_algorithms/blob/main/100-shell_sort.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/YoTi1412/sorting_algorithms/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"YoTi1412","repoName":"sorting_algorithms","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"swap","kind":"function","identStart":144,"identEnd":148,"extentStart":144,"extentEnd":182,"fullyQualifiedName":"swap","identUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":9}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":43}}},{"name":"shell_sort","kind":"function","identStart":477,"identEnd":487,"extentStart":477,"extentEnd":512,"fullyQualifiedName":"shell_sort","identUtf16":{"start":{"lineNumber":23,"utf16Col":5},"end":{"lineNumber":23,"utf16Col":15}},"extentUtf16":{"start":{"lineNumber":23,"utf16Col":5},"end":{"lineNumber":23,"utf16Col":40}}}]}},"copilotInfo":null,"csrf_tokens":{"/YoTi1412/sorting_algorithms/branches":{"post":"dmxtJPkNEHcDsjh9JJrmxrERv_0xVaKH8KVX3v2C0joxURpsATiZIm4NhqD3VYm5N2ZSTuHqBK6JoXbqSeKJkg"},"/repos/preferences":{"post":"hpXcGqZEfGIKw3CrZFN9pj1W2yhB0nDOf8h1NXHd1pPRgSRnxy5TK2AyGn8a_DWgUtemF3Shsa2g5xnTMlRVuA"}}},"title":"sorting_algorithms/100-shell_sort.c at main · YoTi1412/sorting_algorithms"}