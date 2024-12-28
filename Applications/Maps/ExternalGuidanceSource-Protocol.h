//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData;
@protocol SARRouteRepresenting;

@protocol ExternalGuidanceSource <NSObject>
- (NSArray *)incidentsOnRouteOffsets;
- (NSArray *)incidentsOnRouteData;
- (NSData *)etaFilterData;
- (void)repeatCurrentTrafficAlert:(void (^)(_Bool))arg1;
- (void)repeatCurrentGuidance:(void (^)(_Bool))arg1;
- (void)setVoiceGuidanceEnabled:(_Bool)arg1;
- (id <SARRouteRepresenting>)routeRepresentator;
@end
