//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSSerializerStream
- (void)copySerializationInto:(void *)arg1;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeRoomForInt:(int *)arg1;
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeInt:(unsigned long long)arg1;
@end

