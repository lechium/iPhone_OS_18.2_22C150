//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKSerializer : NSObject
{
    id ss;	// 8 = 0x8
}

- (unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x00000000008ca697
- (unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x00000000008ca682
- (unsigned long long)serializePropertyList:(id)arg1;	// IMP=0x00000000008ca366
- (unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2;	// IMP=0x00000000008ca32f
- (unsigned long long)serializeList:(id)arg1;	// IMP=0x00000000008ca207
- (unsigned long long)serializeString:(id)arg1;	// IMP=0x00000000008ca178
- (unsigned long long)serializeData:(id)arg1;	// IMP=0x00000000008ca103
- (unsigned long long)serializeObject:(id)arg1;	// IMP=0x00000000008c9fdb
- (id)serializerStream;	// IMP=0x00000000008c9fd1
- (void)dealloc;	// IMP=0x00000000008c9f73
- (id)initForSerializerStream:(id)arg1;	// IMP=0x00000000008c9f05

@end
