//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEExtensionProviderHostContext, NSError;

@protocol NEExtensionProviderHostDelegate <NSObject>
- (void)extensionDidStop:(NEExtensionProviderHostContext *)arg1;
- (void)extension:(NEExtensionProviderHostContext *)arg1 didStartWithError:(NSError *)arg2;
- (void)extension:(NEExtensionProviderHostContext *)arg1 didFailWithError:(NSError *)arg2;
@end

