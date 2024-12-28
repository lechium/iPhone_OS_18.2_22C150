//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13WeatherDaemon23WeatherDataServiceProxy : NSObject
{
    MISSING_TYPE *endpoint;	// 0 = 0x0
    MISSING_TYPE *caching;	// 0 = 0x0
    MISSING_TYPE *availableDataSetCaching;	// 0 = 0x0
    MISSING_TYPE *statisticsCaching;	// 0 = 0x0
    MISSING_TYPE *networkMonitor;	// 0 = 0x0
    MISSING_TYPE *authenticator;	// 0 = 0x0
    MISSING_TYPE *appConfigurationSettingsProvider;	// 0 = 0x0
    MISSING_TYPE *lazyAirQualityScaleService;	// 0 = 0x0
    MISSING_TYPE *lazyWeatherAlertService;	// 0 = 0x0
    MISSING_TYPE *lazyAvailabilityDataManager;	// 0 = 0x0
    MISSING_TYPE *lazyDataManager;	// 0 = 0x0
    MISSING_TYPE *lazyHourlyStatisticsDataManager;	// 0 = 0x0
    MISSING_TYPE *lazyDailyStatisticsDataManager;	// 0 = 0x0
    MISSING_TYPE *lazyDailySummaryDataManager;	// 0 = 0x0
    MISSING_TYPE *lazyMonthlyStatisticsDataManager;	// 0 = 0x0
    MISSING_TYPE *weatherDataRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *weatherInstantsRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *weatherInstantRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *statisticsRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *hourlyStatisticsRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *dailyStatisticsRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *dailySummaryRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *monthlyStatisticsRequestDeduper;	// 0 = 0x0
    MISSING_TYPE *availabilityRequestDeduper;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000003951c
- (id)init;	// IMP=0x00000000000394e6
- (void)fetchAirQualityScaleWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b22c
- (void)fetchAvailableDataSetsWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a9e5
- (void)performRequestsWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a453

@end
