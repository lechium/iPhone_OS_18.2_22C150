//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISImageDescriptor, ISResourceProvider;

__attribute__((visibility("hidden")))
@interface ISRecipeFactory : NSObject
{
    ISResourceProvider *_resourceProvider;	// 8 = 0x8
    ISImageDescriptor *_descriptor;	// 16 = 0x10
}

+ (id)factoryWithDescriptor:(id)arg1 resourceProvider:(id)arg2;	// IMP=0x006000000005454c
+ (id)factoryWithDescriptor:(id)arg1;	// IMP=0x00600000000544fd
- (void).cxx_destruct;	// IMP=0x00000000000552b1
@property(copy) ISImageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(copy) ISResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
- (void)pushDescriptorContentsToRecipe:(id)arg1;	// IMP=0x00000000000551f6
- (void)enableSegmentationForRecipe:(id)arg1;	// IMP=0x00000000000551af
- (_Bool)shouldSegment;	// IMP=0x0000000000054f15
- (id)genericTaggedRecipe;	// IMP=0x0000000000054ec3
- (id)recipe;	// IMP=0x0000000000054e22
- (id)_recipe;	// IMP=0x00000000000546a7
- (id)_recipeFromDescriptor;	// IMP=0x0000000000054657
- (id)initWithDescriptor:(id)arg1 resourceProvider:(id)arg2;	// IMP=0x00000000000545be

@end

