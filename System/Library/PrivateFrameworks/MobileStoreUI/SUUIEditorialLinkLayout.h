//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SUUIEditorialLinkLayout : NSObject
{
    struct CGSize *_sizes;	// 8 = 0x8
    struct CGSize _totalSize;	// 16 = 0x10
    NSArray *_links;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002cdff1
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) struct CGSize totalSize; // @synthesize totalSize=_totalSize;
- (struct CGSize)sizeForLinkAtIndex:(long long)arg1;	// IMP=0x00000000002cdf6b
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cde19
- (void)dealloc;	// IMP=0x00000000002cddda
- (id)initWithLayoutRequest:(id)arg1;	// IMP=0x00000000002cd9f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
