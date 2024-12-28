//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface SCATStaticElementProvider : NSArray
{
    NSArray *_elements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e7819
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (_Bool)containsElement:(id)arg1;	// IMP=0x00100000000e7786
- (void)didFinishProvidingElements;	// IMP=0x00100000000e7780
- (void)willBeginProvidingElements;	// IMP=0x00100000000e777a
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000e76f1
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000e7669
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00100000000e7624
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00100000000e75dd
- (long long)numberOfElements;	// IMP=0x00100000000e75cb
@property(readonly, nonatomic) _Bool providesElements;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000e7564
- (unsigned long long)count;	// IMP=0x00100000000e7520
@property(readonly, copy) NSString *description;
- (id)initWithElements:(id)arg1;	// IMP=0x00100000000e7419

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
