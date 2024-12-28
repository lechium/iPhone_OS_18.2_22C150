//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class GEOAppStoreAppClip, GEOAppleMediaServicesResult, GEOQuickLink, MUExternalActionHandlingOptions, NSURL, _MXExtension;

@protocol MUExternalActionHandling <NSObject>
- (void)handleWebLink:(NSURL *)arg1 options:(MUExternalActionHandlingOptions *)arg2;
- (void)handleMapsExtension:(_MXExtension *)arg1 usingAppStoreApp:(GEOAppleMediaServicesResult *)arg2 options:(MUExternalActionHandlingOptions *)arg3;
- (void)handleQuickLink:(GEOQuickLink *)arg1 options:(MUExternalActionHandlingOptions *)arg2;
- (void)handleAppClip:(GEOAppStoreAppClip *)arg1 options:(MUExternalActionHandlingOptions *)arg2;
@end
