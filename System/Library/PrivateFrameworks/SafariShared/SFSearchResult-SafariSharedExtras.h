//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFSearchResult.h>

@class NSString, WBSQuerySuggestion;

@interface SFSearchResult (SafariSharedExtras)
+ (id)safari_sfSearchResultWithUniqueIdentifier;	// IMP=0x00100000000c534e
- (id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2;	// IMP=0x00100000000c5708
- (id)safari_firstInlineCardSectionOfClass:(Class)arg1;	// IMP=0x00100000000c56a4
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, copy, nonatomic) NSString *uuidString;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(nonatomic) long long parsecQueryID;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(readonly, nonatomic) NSString *safari_identifierForCaching;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WBSQuerySuggestion",?,&,N

@property(readonly) Class superclass;
@end
