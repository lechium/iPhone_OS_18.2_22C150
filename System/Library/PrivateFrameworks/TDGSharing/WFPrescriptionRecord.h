//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface WFPrescriptionRecord : NSObject
{
    MISSING_TYPE *version;	// 8 = 0x8
    MISSING_TYPE *accPayload;	// 16 = 0x10
    MISSING_TYPE *enrollmentName;	// 32 = 0x20
    MISSING_TYPE *leftLensFactoryCalibrationData;	// 3 = 0x3
    MISSING_TYPE *rightLensFactoryCalibrationData;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000e020
- (void).cxx_destruct;	// IMP=0x000000000000ee90
- (id)init;	// IMP=0x000000000000ee30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000edb0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e530
@property(nonatomic, readonly) NSString *description;

@end
