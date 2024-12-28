//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;
@protocol UINamedLayerStack;

__attribute__((visibility("hidden")))
@interface VUINamedLayerStack : NSObject
{
    id <UINamedLayerStack> _layerStack;	// 8 = 0x8
    UIImage *_cornerRadiusFlatImage;	// 16 = 0x10
    UIImage *_originalImage;	// 24 = 0x18
    NSArray *_replacementLayers;	// 32 = 0x20
}

+ (id)decodedNamedLayerStackWithImage:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3;	// IMP=0x001000000000e02d
+ (id)namedLayerStackWithImage:(id)arg1;	// IMP=0x001000000000dc84
- (void).cxx_destruct;	// IMP=0x000000000000ea06
@property(copy, nonatomic) NSArray *replacementLayers; // @synthesize replacementLayers=_replacementLayers;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImage *cornerRadiusFlatImage; // @synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage;
@property(retain, nonatomic) id <UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) struct CGSize radiosityImageScale;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N

@property(readonly, nonatomic) id radiosityImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,N

@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x000000000000dc55
- (id)init;	// IMP=0x000000000000dc47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
