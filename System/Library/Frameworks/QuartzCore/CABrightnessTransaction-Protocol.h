//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/NSObject-Protocol.h>

@protocol CABrightnessTransaction <NSObject>
- (_Bool)forceCommitBrightness:(id *)arg1 withBlock:(void (^)(NSDictionary *))arg2;
- (_Bool)commitBrightness:(id *)arg1;
- (_Bool)commitBrightness:(id *)arg1 withBlock:(void (^)(NSDictionary *))arg2;
- (void)setIRDCFlushHint:(_Bool)arg1;
- (void)setIndicatorBrightnessLimit:(float)arg1;
- (void)setIndicatorBrightness:(float)arg1;
- (void)setHighAmbientAdaptation:(float)arg1;
- (void)setLowAmbientAdaptation:(float)arg1;
- (void)setBrightnessControlDisabled:(_Bool)arg1;
- (void)setBrightnessLimit:(float)arg1;
- (void)setContrastEnhancer:(float)arg1;
- (void)setWhitePointMatrix:(const CDStruct_443af386 *)arg1 scale:(float)arg2;
- (void)setFilteredAmbient:(float)arg1;
- (void)setAmbient:(float)arg1;
- (void)setPotentialHeadroom:(float)arg1;
- (void)setHeadroom:(float)arg1;
- (void)setSDRBrightness:(float)arg1;
@end
