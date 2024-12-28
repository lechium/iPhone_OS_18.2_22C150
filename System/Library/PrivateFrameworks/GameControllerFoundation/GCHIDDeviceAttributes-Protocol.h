//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@protocol GCHIDDeviceAttributes
@property(readonly) NSArray *elements;
@property(readonly) NSNumber *maxFeatureReportSize;
@property(readonly) NSNumber *maxOutputReportSize;
@property(readonly) NSNumber *maxInputReportSize;
@property(readonly) NSString *product;
@property(readonly) NSString *manufacturer;
@property(readonly) NSNumber *versionNumber;
@property(readonly) NSNumber *productID;
@property(readonly) NSNumber *vendorID;
@property(readonly) NSString *transport;
- (id)valueForHIDDeviceKey:(NSString *)arg1;
@end
