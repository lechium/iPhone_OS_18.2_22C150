//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/AXUIDaemonApplicationDelegate.h>

@class NSTimer;

@interface CACAMain : AXUIDaemonApplicationDelegate
{
    double _startTime;	// 8 = 0x8
    NSTimer *_startupLanguagePackCheckTimer;	// 16 = 0x10
    _Bool _didStartInstall;	// 24 = 0x18
    _Bool _didNotifyOfDownloading;	// 25 = 0x19
}

+ (id)featureEnabledStatusDidChangeNotification;	// IMP=0x0040000000002754
+ (_Bool)isFeatureEnabled;	// IMP=0x0010000000002714
+ (_Bool)isCarPlayConnected;	// IMP=0x0010000000002664
+ (id)debugFeatureName;	// IMP=0x0010000000002657
+ (id)loggingFacility;	// IMP=0x001000000000264d
- (void).cxx_destruct;	// IMP=0x0020000000002a02
- (void)_downloadErrorOccurred;	// IMP=0x00100000000029fc
- (void)_downloadProgressChanged;	// IMP=0x00100000000029cc
- (void)didUpdateOrientation;	// IMP=0x0010000000002988
- (void)willTerminate;	// IMP=0x0010000000002944
- (void)didFinishLaunching;	// IMP=0x0010000000002761
- (void)startCommandAndControl;	// IMP=0x0010000000002609
- (void)checkNecessaryLanguagePack;	// IMP=0x00100000000019d2

@end

