//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailKit/NSObject-Protocol.h>

@class MEMessage, NSArray;

@protocol MEMessageActionHandler <NSObject>
- (void)decideActionForMessage:(MEMessage *)arg1 completionHandler:(void (^)(MEMessageActionDecision *))arg2;

@optional
@property(readonly, copy) NSArray *requiredHeaders;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C

@end
