//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSBrowserTabCompletionMatch.h>

@class NSString, SFSearchResult, WBSCompletionQuery, WBSQuerySuggestion;
@protocol CompletionItemActionHandler;

@interface WBSBrowserTabCompletionMatch (SafariCompletionItem)
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x002000000009eb6f
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x002000000009eb5d
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x002000000009e790
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x002000000009e783
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x002000000009e715
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x002000000009e6bd
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x002000000009e609

// Remaining properties
@property(readonly, nonatomic) long long completionCellBackgroundModeInTopSection;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<CompletionItemActionHandler>",?,&,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, nonatomic) _Bool needsSectionHeader;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(nonatomic) long long parsecQueryID;
@property(retain, nonatomic) WBSCompletionQuery *query;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WBSCompletionQuery",?,&,N

@property(readonly, nonatomic) _Bool restoresSearchState;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WBSQuerySuggestion",?,&,N

@property(readonly, copy, nonatomic) NSString *subtextForHistoryServiceCompletionList;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *titleForHistoryServiceCompletionList;
@property(readonly, nonatomic) NSString *urlStringForHistoryServiceCompletionList;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) _Bool usesDefaultHeaderView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy, nonatomic) NSString *uuidString;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@end

