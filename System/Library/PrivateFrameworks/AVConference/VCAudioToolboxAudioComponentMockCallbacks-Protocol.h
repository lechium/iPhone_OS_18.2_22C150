//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCAudioToolboxAudioComponentMockCallbacks
- (_Bool)copyName:(struct OpaqueAudioComponent *)arg1 outName:(const struct __CFString **)arg2 outStatus:(int *)arg3;
- (_Bool)getVersion:(struct OpaqueAudioComponent *)arg1 outVersion:(unsigned int *)arg2 outStatus:(int *)arg3;
- (_Bool)instanceDispose:(struct OpaqueAudioComponentInstance *)arg1 outStatus:(int *)arg2;
- (_Bool)instanceNew:(struct OpaqueAudioComponent *)arg1 outInstance:(struct OpaqueAudioComponentInstance **)arg2 outStatus:(int *)arg3;
- (_Bool)findNextComponent:(struct OpaqueAudioComponent *)arg1 description:(const struct AudioComponentDescription *)arg2 outComponent:(struct OpaqueAudioComponent **)arg3;
@end

