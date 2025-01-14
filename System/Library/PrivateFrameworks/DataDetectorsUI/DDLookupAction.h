//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RVQuery;

__attribute__((visibility("hidden")))
@interface DDLookupAction
{
    NSString *_queryString;	// 104 = 0x68
    struct _NSRange _queryStringRange;	// 112 = 0x70
    RVQuery *_query;	// 128 = 0x80
    CDUnknownBlockType _reportAnIssueBlock;	// 136 = 0x88
    CDUnknownBlockType _reportAnIssueMetadataFetchingBlock;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000036bdb
- (id)iconName;	// IMP=0x0000000000036bce
- (id)menuActions;	// IMP=0x0000000000036a43
- (id)createViewController;	// IMP=0x000000000003690c
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x00000000000368ef
- (id)initWithRVQuery:(id)arg1 reportAnIssueBlock:(CDUnknownBlockType)arg2 metadataFetchingBlock:(CDUnknownBlockType)arg3 context:(id)arg4;	// IMP=0x00000000000367f7
- (id)initWithRVQuery:(id)arg1 reportAnIssueBlock:(CDUnknownBlockType)arg2 context:(id)arg3;	// IMP=0x00000000000367df
- (id)initWithQueryString:(id)arg1 range:(struct _NSRange)arg2 context:(id)arg3;	// IMP=0x0000000000036726
- (id)initWithRVQuery:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036698

@end

