//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BMAtomBatchChunkerPolicy;

@interface BMAtomBatchChunker : NSObject
{
    id <BMAtomBatchChunkerPolicy> _chunkerPolicy;	// 8 = 0x8
    _Bool _moreComing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000007054
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
- (void)didAddAtomWithData:(id)arg1;	// IMP=0x001000000000702c
- (_Bool)canAddAtomWithData:(id)arg1;	// IMP=0x0010000000007016
- (id)initWithChunkerPolicy:(id)arg1;	// IMP=0x0010000000006fa3

@end

