//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/WBSCompletionListItem-Protocol.h>

@class CompletionGroup, CompletionList, NSString, UITableViewCell, UIView, WBSCompletionQuery;
@protocol CompletionItem, CompletionItemActionHandler;

@protocol CompletionItem <WBSCompletionListItem>
@property(readonly, nonatomic) NSString *titleForHistoryServiceCompletionList;
- (NSString *)reflectedStringForUserTypedString:(NSString *)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (void)acceptCompletionWithActionHandler:(id <CompletionItemActionHandler>)arg1;
- (void)configureCompletionTableViewCell:(UITableViewCell *)arg1 forCompletionList:(CompletionList *)arg2;
- (UITableViewCell *)completionTableViewCellForCompletionList:(CompletionList *)arg1;
- (NSString *)completionTableViewCellReuseIdentifier;

@optional
@property(readonly, copy, nonatomic) NSString *uuidString;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(retain, nonatomic) WBSCompletionQuery *query;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WBSCompletionQuery",?,&,N

@property(readonly, copy, nonatomic) NSString *subtextForHistoryServiceCompletionList;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) NSString *urlStringForHistoryServiceCompletionList;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) long long completionCellBackgroundModeInTopSection;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<CompletionItemActionHandler>",?,&,N

@property(readonly, nonatomic) _Bool restoresSearchState;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, nonatomic) _Bool needsSectionHeader;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool usesDefaultHeaderView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

- (NSString *)userVisibleURLString;
- (NSString *)originalURLString;
- (_Bool)shouldPrefetchWithMatchLength:(unsigned long long)arg1;
- (_Bool)isEquivalentTo:(id <CompletionItem>)arg1;
- (void)configureCompletionTableHeaderView:(UIView *)arg1 forCompletionListGroup:(CompletionGroup *)arg2;
- (UIView *)completionTableHeaderView;
- (double)completionTableViewCellCustomHeightForCompletionList:(CompletionList *)arg1;
@end

