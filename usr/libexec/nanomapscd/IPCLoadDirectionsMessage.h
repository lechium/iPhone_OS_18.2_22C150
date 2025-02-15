//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL;

@interface IPCLoadDirectionsMessage
{
    _Bool _originIsWatch;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSData *_routeContextData;	// 24 = 0x18
    NSData *_routePersistentData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000377a6
@property(copy, nonatomic) NSData *routePersistentData; // @synthesize routePersistentData=_routePersistentData;
@property(copy, nonatomic) NSData *routeContextData; // @synthesize routeContextData=_routeContextData;
@property(nonatomic) _Bool originIsWatch; // @synthesize originIsWatch=_originIsWatch;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;	// IMP=0x0010000000037671
- (id)dictionaryValue;	// IMP=0x0010000000037483
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000372c4

@end

