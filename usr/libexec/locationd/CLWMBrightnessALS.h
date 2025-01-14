//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BrightnessSystemClient;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMBrightnessALS
{
    BrightnessSystemClient *_brightnessSystemClient;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    int _sampleCount;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0020000001365e36
- (void).cxx_destruct;	// IMP=0x0010000001365e25
- (int)getSampleCount;	// IMP=0x0010000001365e15
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000001365e01
- (void)handleBrightnessClientNotification:(id)arg1 withValue:(id)arg2;	// IMP=0x0010000001365cf5
- (void)teardownListeners;	// IMP=0x0010000001365cc8
- (void)setupListener;	// IMP=0x0010000001365b63
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000001365af0

@end

