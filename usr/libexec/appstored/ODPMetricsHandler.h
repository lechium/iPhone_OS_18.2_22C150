//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSEngagement, NSDictionary, _TtC9appstored6LogKey;

@interface ODPMetricsHandler
{
    _TtC9appstored6LogKey *_logKey;	// 8 = 0x8
    AMSEngagement *_engagement;	// 16 = 0x10
    NSDictionary *_powerMetrics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000263bd1
- (id)topic;	// IMP=0x0010000000263855
- (_Bool)shouldCollectMetrics;	// IMP=0x001000000026384d
- (void)resetMetrics;	// IMP=0x0010000000263327
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x0010000000262fd7
- (void)recordLaunches:(id)arg1;	// IMP=0x00100000002624db
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x0010000000261d13
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x0010000000260f30
- (void)postMetrics;	// IMP=0x00100000002600d8
- (id)logKey;	// IMP=0x0010000000260065
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x001000000025fd9a
- (id)deviceID;	// IMP=0x001000000025fc59
- (long long)appUsageType;	// IMP=0x001000000025fc4e

@end

