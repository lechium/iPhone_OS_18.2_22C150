//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXCustomizableMouse;

@interface HNDMouseDevice
{
    unsigned int _lastButtonMask;	// 72 = 0x48
    double _sensitivityMultiplier;	// 80 = 0x50
    AXCustomizableMouse *_mouse;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000066b91
@property(readonly, nonatomic) AXCustomizableMouse *mouse; // @synthesize mouse=_mouse;
- (void)overrideCustomizableMouse:(id)arg1;	// IMP=0x0010000000066b6c
- (id)actionOverrideForUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2;	// IMP=0x0010000000066aab
- (void)handleUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 value:(long long)arg3;	// IMP=0x0010000000066aa5
- (void)handleReportCallback:(int)arg1 report:(char *)arg2 reportLength:(long long)arg3;	// IMP=0x0010000000066a9f
- (void)updateMouseService:(struct __IOHIDServiceClient *)arg1;	// IMP=0x0010000000066a2c
- (_Bool)handleHIDEvent:(id)arg1;	// IMP=0x001000000006664d
- (void)_updateSensitivityMultiplier;	// IMP=0x00100000000665f1
- (void)_updateAXMouse;	// IMP=0x0010000000066589
- (_Bool)load;	// IMP=0x0010000000066522
- (void)_setupAXMouseListener;	// IMP=0x0010000000066335
- (id)description;	// IMP=0x0010000000066242
- (void)dealloc;	// IMP=0x00100000000661c9
- (id)init;	// IMP=0x0010000000065fac

@end

