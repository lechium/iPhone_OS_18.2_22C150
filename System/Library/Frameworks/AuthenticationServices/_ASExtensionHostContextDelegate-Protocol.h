//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class NSError, NSExtensionContext;
@protocol _ASExtensionHostContext;

@protocol _ASExtensionHostContextDelegate <NSObject>

@optional
- (void)prepareToCancelRequestWithHostContext:(NSExtensionContext<_ASExtensionHostContext> *)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
@end
