//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ContentInteractionTestRunner
{
    int _iterations;	// 80 = 0x50
}

@property(nonatomic) int iterations; // @synthesize iterations=_iterations;
- (void)stopSubtest:(id)arg1;	// IMP=0x0000000000178e87
- (void)startSubtest:(id)arg1;	// IMP=0x0000000000178e08
- (void)endTrackingFrameRate;	// IMP=0x0000000000178db5
- (void)startTrackingFrameRate;	// IMP=0x0000000000178d62
- (_Bool)startPageAction:(id)arg1;	// IMP=0x0000000000178ce6
- (id)pageWebView;	// IMP=0x0000000000178c45
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x0000000000178bf1

@end
