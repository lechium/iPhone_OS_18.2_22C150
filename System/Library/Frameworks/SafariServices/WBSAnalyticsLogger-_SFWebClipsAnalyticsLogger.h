//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSAnalyticsLogger.h>

@interface WBSAnalyticsLogger (_SFWebClipsAnalyticsLogger)
- (void)schedulePeriodicWebClipsReport;	// IMP=0x00700000000d2f60
- (void)_performWebClipsBehaviorReport;	// IMP=0x00700000000d2d49
- (void)_webClipsAnalyticsLogger_updatePeriodicCoreAnalyticsLastReportTime;	// IMP=0x00700000000d2cf9
- (void)_sf_reportBrowserChoice:(id)arg1;	// IMP=0x007000000018306a
- (void)_sf_reportBrowserChoiceNotNow;	// IMP=0x007000000018303d
- (void)_sf_reportPrivateWindowStatus:(long long)arg1;	// IMP=0x0070000000182f1f
- (void)_sf_didPerformFormatMenuAction:(long long)arg1 provenance:(long long)arg2;	// IMP=0x0070000000182dac
- (void)_sf_reportCapsuleLayoutStyle:(long long)arg1 backgroundColorInTabBarEnabled:(_Bool)arg2;	// IMP=0x0070000000182c5a
- (void)_sf_performExtensionsReportIfNecessaryWithExtensionsController:(id)arg1;	// IMP=0x00700000001827fe
- (void)_sf_didAddFavoriteFromShareSheet;	// IMP=0x00700000001827d1
- (void)_sf_didBeginDownloadWithMIMEType:(id)arg1 uti:(id)arg2 downloadType:(long long)arg3 promptType:(long long)arg4 browserPersona:(long long)arg5;	// IMP=0x00700000001824d8
@end
