//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, PETailspin;
@protocol PUPhotoEditDiagnosticsDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditDiagnosticsManager : NSObject
{
    _Bool _diagnosticsInProgress;	// 8 = 0x8
    id <PUPhotoEditDiagnosticsDelegate> _delegate;	// 16 = 0x10
    long long _actionType;	// 24 = 0x18
    NSTimer *_diagnosticsTimer;	// 32 = 0x20
    PETailspin *_tailspinManager;	// 40 = 0x28
}

+ (id)diagnosticsManagerWithActionType:(long long)arg1 delegate:(id)arg2;	// IMP=0x00600000005a696f
- (void).cxx_destruct;	// IMP=0x00000000005a6613
@property(nonatomic) _Bool diagnosticsInProgress; // @synthesize diagnosticsInProgress=_diagnosticsInProgress;
@property(retain, nonatomic) PETailspin *tailspinManager; // @synthesize tailspinManager=_tailspinManager;
@property(retain, nonatomic) NSTimer *diagnosticsTimer; // @synthesize diagnosticsTimer=_diagnosticsTimer;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) __weak id <PUPhotoEditDiagnosticsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endMonitoring;	// IMP=0x00000000005a6527
- (void)_fileRadarWithTailspinFile:(id)arg1;	// IMP=0x00000000005a64be
- (void)_diagnosticsTimerFired:(id)arg1;	// IMP=0x00000000005a6440
- (void)beginMonitoringForTimeInterval:(double)arg1;	// IMP=0x00000000005a6314
- (void)dealloc;	// IMP=0x00000000005a62d6
- (id)initWithActionType:(long long)arg1 delegate:(id)arg2;	// IMP=0x00000000005a6251

@end
