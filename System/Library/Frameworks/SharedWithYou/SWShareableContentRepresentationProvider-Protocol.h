//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharedWithYou/NSObject-Protocol.h>

@class NSString, SWShareableContent;

@protocol SWShareableContentRepresentationProvider <NSObject>
- (void)loadRepresentationForContent:(SWShareableContent *)arg1 typeIdentifier:(NSString *)arg2 itemProviderIndex:(long long)arg3 completionHandler:(void (^)(SLShareableContentLoadResult *, NSError *))arg4;
@end

