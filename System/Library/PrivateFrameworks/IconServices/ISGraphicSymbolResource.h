//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFGraphicSymbolDescriptor, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISGraphicSymbolResource : NSObject
{
    IFGraphicSymbolDescriptor *_descriptor;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_symbolName;	// 24 = 0x18
}

+ (id)defaultResource;	// IMP=0x0010000000038f6b
+ (id)graphicSymbolResourceWithConfiguration:(id)arg1 symbolName:(id)arg2 url:(id)arg3;	// IMP=0x0010000000038c9a
+ (id)graphicSymbolResourceWithRecipe:(id)arg1 url:(id)arg2;	// IMP=0x0010000000038a36
- (void).cxx_destruct;	// IMP=0x00000000000396c5
@property(retain) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(retain) IFGraphicSymbolDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)updateDescriptorWithImageDescriptor:(id)arg1;	// IMP=0x00000000000393e8
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000039116
- (id)initWithGraphicSymbolDescriptor:(id)arg1 symbolName:(id)arg2 url:(id)arg3;	// IMP=0x000000000003902a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
