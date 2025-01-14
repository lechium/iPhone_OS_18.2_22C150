//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBEmptyDisplayListContents : NSObject
{
}

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000037a6a
- (id)encodedDataForDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000037a74
@property(readonly, nonatomic) const void *_rb_xml_document;
@property(readonly, nonatomic) const void *_rb_contents;
@property(readonly, copy, nonatomic) NSString *xmlDescription;
- (void)renderInContext:(struct CGContext *)arg1 options:(id)arg2;	// IMP=0x00000000000379c3
- (void)_drawInState:(struct _RBDrawingState *)arg1 alpha:(float)arg2;	// IMP=0x00000000000379bd
- (void)drawInState:(struct _RBDrawingState *)arg1;	// IMP=0x00000000000379b7
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) struct CGRect boundingRect;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

