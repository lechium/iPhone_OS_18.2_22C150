//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CityPersistenceConversions : NSObject
{
}

+ (id)cloudDictionaryRepresentationOfALCity:(id)arg1;	// IMP=0x00800000000413bb
+ (id)cityFromALCity:(id)arg1;	// IMP=0x008000000004125d
+ (id)cloudDictionaryRepresentationOfCity:(id)arg1;	// IMP=0x0080000000040f7f
+ (id)cityFromCloudDictionary:(id)arg1;	// IMP=0x0080000000040cb1
+ (id)weatherDetailsDictionaryFromCity:(id)arg1;	// IMP=0x008000000004003e
+ (id)hourlyForecastDictionariesFromCity:(id)arg1;	// IMP=0x008000000003fdbf
+ (id)dayForecastDictionariesFromCity:(id)arg1;	// IMP=0x008000000003fac7
+ (_Bool)cityDictionaryHasValidCoordinates:(id)arg1;	// IMP=0x008000000003f978
+ (id)dictionaryRepresentationOfCity:(id)arg1;	// IMP=0x008000000003f625
+ (id)temperatureFromDictionaryRepresentation:(id)arg1;	// IMP=0x008000000003f3e0
+ (id)dictionaryRepresentationOfTemperature:(id)arg1;	// IMP=0x008000000003f215
+ (id)scaleCategoryFromDictionaryRepresentation:(id)arg1;	// IMP=0x008000000003f100
+ (id)dictionaryRepresentationOfScaleCategory:(id)arg1;	// IMP=0x008000000003ef32
+ (_Bool)isCityValid:(id)arg1;	// IMP=0x008000000003eea6
+ (void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2;	// IMP=0x008000000003eb15
+ (void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2;	// IMP=0x008000000003e671
+ (id)cityFromDictionary:(id)arg1;	// IMP=0x008000000003d578

@end
