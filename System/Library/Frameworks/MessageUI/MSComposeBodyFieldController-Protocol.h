//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol MSComposeBodyFieldController <NSObject>
- (void)changeQuoteLevelBy:(long long)arg1 withUndoActionName:(NSString *)arg2;
- (void)enableSmartReply:(_Bool)arg1;
- (void)enableQuickReply:(_Bool)arg1;
- (void)stripCustomBodyIdentifiers;
- (void)removeRichLinkFromSelection;
- (void)makeRichLinkFromSelection;
- (void)insertRichLinkWithURL:(NSURL *)arg1 completionHandler:(void (^)(void))arg2;
@end

