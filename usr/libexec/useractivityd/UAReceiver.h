//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface UAReceiver
{
    NSSet *scanningForTypes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000013cc1
@property(copy) NSSet *scanningForTypes; // @synthesize scanningForTypes;
- (id)statusString;	// IMP=0x0010000000013c61
- (_Bool)terminate;	// IMP=0x0010000000013be2
- (_Bool)fetchMoreAppSuggestions;	// IMP=0x0010000000013bda
- (id)receivedItems;	// IMP=0x0010000000013bd2
@property(readonly) _Bool receiving; // @dynamic receiving;
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x0010000000013b9b

@end
