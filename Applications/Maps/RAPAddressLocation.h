//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, CLPlacemark, NSMutableArray, NSString;

@interface RAPAddressLocation : NSObject
{
    CLGeocoder *_geocoder;	// 8 = 0x8
    NSMutableArray *_completionBlocks;	// 16 = 0x10
    CLPlacemark *_placemark;	// 24 = 0x18
    struct CLLocationCoordinate2D _coordinate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002b640d
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)_invokeCompletionBlocksWithFinishedFlag:(_Bool)arg1;	// IMP=0x00100000002b6294
- (void)cancelProcessing;	// IMP=0x00100000002b624e
- (void)processWithGeocoderIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b6029
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00100000002b5fd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
