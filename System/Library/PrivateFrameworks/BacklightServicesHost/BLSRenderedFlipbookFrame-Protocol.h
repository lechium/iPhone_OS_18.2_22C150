//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class NSString, NSUUID;
@protocol BLSPresentationDateSpecifying;

@protocol BLSRenderedFlipbookFrame <NSObject>
@property(readonly, nonatomic) NSUUID *bls_uuid;
@property(readonly, nonatomic, getter=isInverted) _Bool inverted;
@property(readonly, nonatomic) struct CGRect rawSurfaceFrame;
@property(readonly, nonatomic) struct __IOSurface *rawSurface;
@property(readonly, nonatomic) struct __IOSurface *surface;
@property(readonly, nonatomic) id <BLSPresentationDateSpecifying> bls_specifier;
@property(readonly, nonatomic) unsigned long long memoryUsage;
@property(readonly, nonatomic) float aplDimming;
@property(readonly, nonatomic) float apl;
@property(readonly, nonatomic) unsigned long long frameId;
@property(readonly, nonatomic) unsigned long long presentationTime;
- (NSString *)bls_shortLoggingString;
- (NSString *)bls_loggingString;
@end

