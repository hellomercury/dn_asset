// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 2.0.50727.1433
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------

namespace AI.Runtime {
    using UnityEngine;
    
    
    public class AIRuntimeValueHP : AIRunTimeBase {
        
        public int mAIArgMaxHP;
        
        public int mAIArgMinHP;
        
        public override void Init(AI.Runtime.AIRuntimeTaskData data) {
			base.Init(data);
        }
        
        public override AIRuntimeStatus OnTick(XEntity entity) {
			return AITreeImpleted.ValueHPUpdate(entity, mAIArgMaxHP, mAIArgMinHP);
        }
    }
}
