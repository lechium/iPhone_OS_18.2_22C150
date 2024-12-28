//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, UIView, UIViewController, WDExportManager;
@protocol HKApplicationProviding;

__attribute__((visibility("hidden")))
@interface WDExportController : NSObject
{
    WDExportManager *_exportManager;	// 8 = 0x8
    unsigned long long _backgroundTask;	// 16 = 0x10
    unsigned long long _exportResult;	// 24 = 0x18
    NSURL *_exportFileURL;	// 32 = 0x20
    _Bool _isExporting;	// 40 = 0x28
    UIView *_exportSourceView;	// 48 = 0x30
    UIViewController *_exportPresentingViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002446d
- (void)_cleanUpExport;	// IMP=0x00000000000243c1
- (void)_shareExportFileAndCleanUp;	// IMP=0x0000000000023e5b
- (void)_beginExport;	// IMP=0x0000000000023723
- (void)verifyExportWithPresentingViewController:(id)arg1 shareSheetSourceView:(id)arg2;	// IMP=0x00000000000233d2
- (_Bool)exportInProgress;	// IMP=0x00000000000233c9
@property(nonatomic) __weak id <HKApplicationProviding> applicationProvider;
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000002331b

@end
