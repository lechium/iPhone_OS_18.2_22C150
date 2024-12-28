//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBAASignerContext, IDSBAASigningResult, NSData, NSError;

@interface IDSValidationSigningResult : NSObject
{
    NSData *_absintheResultData;	// 8 = 0x8
    NSData *_absintheServerKey;	// 16 = 0x10
    NSError *_absintheError;	// 24 = 0x18
    IDSBAASigningResult *_baaResult;	// 32 = 0x20
    IDSBAASignerContext *_baaSignerContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000017525e
@property(readonly, nonatomic) IDSBAASignerContext *baaSignerContext; // @synthesize baaSignerContext=_baaSignerContext;
@property(readonly, nonatomic) IDSBAASigningResult *baaResult; // @synthesize baaResult=_baaResult;
@property(readonly, nonatomic) NSError *absintheError; // @synthesize absintheError=_absintheError;
@property(readonly, nonatomic) NSData *absintheServerKey; // @synthesize absintheServerKey=_absintheServerKey;
@property(readonly, nonatomic) NSData *absintheResultData; // @synthesize absintheResultData=_absintheResultData;
- (id)initWithBaaResult:(id)arg1;	// IMP=0x001000000017518e
- (id)initWithAbsintheResultData:(id)arg1 absintheServerKey:(id)arg2 absintheError:(id)arg3 baaResult:(id)arg4;	// IMP=0x00100000001750a6

@end
