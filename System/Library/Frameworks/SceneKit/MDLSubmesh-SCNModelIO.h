//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ModelIO/MDLSubmesh.h>

@interface MDLSubmesh (SCNModelIO)
+ (id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 positionSourceChannel:(unsigned long long)arg3;	// IMP=0x005000000001df2d
+ (id)newSubmeshWithUniquedIndexData:(id)arg1 andSCNGeometryElement:(id)arg2 bufferAllocator:(id)arg3;	// IMP=0x005000000001dbd5
+ (id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2;	// IMP=0x005000000001dbc0
+ (id)newSubmeshWithGeometryData:(id)arg1 indexBufferLength:(unsigned long long)arg2 interleaved:(_Bool)arg3 channelCount:(unsigned long long)arg4 channelIdx:(unsigned long long)arg5 bytesPerIndex:(unsigned long long)arg6 indexType:(unsigned long long)arg7 geometryType:(long long)arg8 allocator:(id)arg9 indexCount:(unsigned long long)arg10 topology:(id)arg11;	// IMP=0x005000000001d981
+ (id)submeshWithUniquedIndexData:(id)arg1 andSCNGeometryElement:(id)arg2 bufferAllocator:(id)arg3;	// IMP=0x005000000001d967
+ (id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 positionSourceChannel:(unsigned long long)arg3;	// IMP=0x005000000001d94d
+ (id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2;	// IMP=0x005000000001d933
+ (id)submeshWithSCNGeometryElement:(id)arg1;	// IMP=0x005000000001d917
@end

