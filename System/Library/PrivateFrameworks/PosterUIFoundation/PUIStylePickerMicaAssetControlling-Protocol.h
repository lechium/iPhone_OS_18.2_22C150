//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterUIFoundation/NSObject-Protocol.h>

@class CALayer, NSArray, NSBundle, NSObject, NSString;
@protocol CAStateControllerDelegate;

@protocol PUIStylePickerMicaAssetControlling <NSObject>
@property(readonly, copy, nonatomic) NSArray *publishedObjectNames;
@property(nonatomic) __weak NSObject<CAStateControllerDelegate> *stateControllerDelegate;
- (_Bool)setState:(NSString *)arg1 onLayer:(CALayer *)arg2 animated:(_Bool)arg3 transitionSpeed:(double)arg4 completion:(void (^)(_Bool))arg5;
- (_Bool)setState:(NSString *)arg1 animated:(_Bool)arg2 transitionSpeed:(double)arg3 completion:(void (^)(_Bool))arg4;
- (_Bool)setState:(NSString *)arg1 animated:(_Bool)arg2;
- (_Bool)setState:(NSString *)arg1;
- (CALayer *)publishedObjectWithName:(NSString *)arg1;
- (void)updateAsset:(NSString *)arg1 bundle:(NSBundle *)arg2;
@end
