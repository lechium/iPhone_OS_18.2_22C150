//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface PDRequestPassesResult : NSObject
{
    NSArray *_passesData;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000033d3c9
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *passesData; // @synthesize passesData=_passesData;
- (id)initWithPassesData:(id)arg1 error:(id)arg2;	// IMP=0x001000000033d31c

@end

