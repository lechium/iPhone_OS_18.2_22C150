//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDOriginalFHIRResourceObject, MISSING_TYPE;

@interface HKHealthRecordsExtractor : NSObject
{
    MISSING_TYPE *router;	// 8 = 0x8
    MISSING_TYPE *decoder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ae110
- (id)init;	// IMP=0x00000000001ae030
- (id)comparePatientResourceDataWithExisting:(id)arg1 incoming:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ade50
- (void)extractResource:(HDOriginalFHIRResourceObject *)arg1 completion:(void (^)(HDExtractionResultItem *, NSError *))arg2;	// IMP=0x00000000001adc10

@end

