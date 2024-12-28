//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKWebProcessPlugInFrame;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillFrame : NSObject
{
    WKWebProcessPlugInFrame *_plugInFrame;	// 8 = 0x8
}

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1;	// IMP=0x001000000015cbde
- (void).cxx_destruct;	// IMP=0x000000000015d1e2
@property(readonly, nonatomic) WKWebProcessPlugInFrame *plugInFrame; // @synthesize plugInFrame=_plugInFrame;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015d04d
- (id)committedURL;	// IMP=0x000000000015d037
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;	// IMP=0x000000000015cf64
- (_Bool)containsAnyFormElements;	// IMP=0x000000000015cf4e
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;	// IMP=0x000000000015ceaf
- (id)pageMainFrame;	// IMP=0x000000000015ce19
- (struct OpaqueFormAutoFillFrame *)frameRef;	// IMP=0x000000000015ce0f
- (id)_formMetadataController;	// IMP=0x000000000015cda0
- (id)_pageContoller;	// IMP=0x000000000015cd39
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015cca5
- (id)initWithWebProcessPlugInFrame:(id)arg1;	// IMP=0x000000000015cc27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
