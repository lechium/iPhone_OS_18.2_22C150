//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol ATXModeClassifierClientModel;

@protocol ATXModeClassifierClientModelDelegate
- (void)clientModel:(id <ATXModeClassifierClientModel>)arg1 didUpdatePredictionWithUUID:(NSString *)arg2 userModeName:(NSString *)arg3 modeType:(int)arg4 confidenceScore:(double)arg5 modeOrigin:(int)arg6 originBundleId:(NSString *)arg7 originAnchorType:(NSString *)arg8 serializedTriggers:(NSArray *)arg9;
@end
