//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSensorMonitorSimulatedDataGenerator : NSObject
{
}

+ (struct CLCatherineData)generateHighFrequencyHeartRateData:(id)arg1;	// IMP=0x004000000091e030
+ (struct ActivityEvent)generateSimulatedPhysicalActivityEventsData:(id)arg1;	// IMP=0x001000000091dd2b
+ (struct CLElevationChangeEntry)generateSimulatedElevationData:(id)arg1;	// IMP=0x001000000091db6e
+ (struct CLOdometerEntry)generateSimulatedOdometerData:(id)arg1;	// IMP=0x001000000091d621
+ (struct CLOdometerSuitability)generateSimulatedOdometerSuitabilityData:(id)arg1;	// IMP=0x001000000091d4b3
+ (struct CLStepCountEntry)generateSimulatedPedometerData:(id)arg1;	// IMP=0x001000000091cbaa

@end
